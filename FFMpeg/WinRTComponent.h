#pragma once

using namespace Windows::Foundation;
#ifndef __STDC_CONSTANT_MACROS
#  define __STDC_CONSTANT_MACROS
#endif

extern "C" {
#include <avcodec.h>
#include <avformat.h>
}

namespace FFMpeg
{
	// Activatable class.
    public ref class LangSample sealed
    {

    public:
        LangSample()
        {    
			av_register_all();
		    AVFormatContext *pFormatCtx;

		    //open video file
		    if (av_open_input_file(&pFormatCtx, "C:\\test\\centaur_1.mpeg", NULL, 0, NULL) != 0)
			    return ;

            // Retrieve stream information
            if(av_find_stream_info(pFormatCtx)<0)
                return ; // Couldn't find stream information  

        }

		int testMePlease()
	    {
		   return 0;
	    }
	};
}





