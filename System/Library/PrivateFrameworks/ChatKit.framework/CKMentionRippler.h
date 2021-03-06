/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ChatKit/ChatKit-Structs.h>
@class NSArray;

@interface CKMentionRippler : NSObject {

	NSArray* _colors;
	NSArray* _shadowColors;
	NSArray* _scales;
	NSArray* _offsets;
	double _startTime;
	unsigned long long _preFrames;
	unsigned long long _animateFrames;
	unsigned long long _postFrames;
	unsigned long long _delayFrames;
	BOOL _reduceMotion;

}
-(id)init;
-(void)generateValues;
-(unsigned long long)currentIndexForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 isFinished:(BOOL*)arg4 ;
-(unsigned long long)currentTimeIndex;
-(unsigned long long)finishedTimeIndex;
-(id)currentColorForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(double)currentScaleForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(id)currentShadowColorForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(BOOL)finishedForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(CGSize)currentOffsetForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(void)start;
@end

