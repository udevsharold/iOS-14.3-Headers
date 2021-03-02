/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MOVStreamIO/MOVStreamIO-Structs.h>
@interface MOVStreamFrame : NSObject {

	CVBufferRef _pixelBuffer;
	double _timeStamp;
	id _context;
	SCD_Struct_MO31 _cmTimeStamp;

}

@property (readonly) CVBufferRef pixelBuffer;                  //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) double timeStamp;                         //@synthesize timeStamp=_timeStamp - In the implementation block
@property (readonly) SCD_Struct_MO31 cmTimeStamp;              //@synthesize cmTimeStamp=_cmTimeStamp - In the implementation block
@property (readonly) id context;                               //@synthesize context=_context - In the implementation block
-(void)dealloc;
-(double)timeStamp;
-(id)description;
-(CVBufferRef)pixelBuffer;
-(id)context;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 timeStamp:(double)arg2 context:(id)arg3 ;
-(SCD_Struct_MO31)cmTimeStamp;
@end
