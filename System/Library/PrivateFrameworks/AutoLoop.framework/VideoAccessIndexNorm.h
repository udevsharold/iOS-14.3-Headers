/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AutoLoop/AutoLoop-Structs.h>
#import <AutoLoop/VideoAccessIndex.h>

@interface VideoAccessIndexNorm : VideoAccessIndex {

	FrameTimeNormalizer* mNormalizer;

}
-(id)initFromFile:(id)arg1 pixelFormat:(unsigned)arg2 normalizer:(FrameTimeNormalizer*)arg3 ;
-(int)getFrameAtIndex:(unsigned)arg1 pixBuf:(_CVBuffer*)arg2 ;
@end

