/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/PagesQuicklook.framework/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSWPTextWrap
@required
-(id)beginWrappingToColumn:(id)arg1 target:(id)arg2 hasWrapables:(BOOL*)arg3;
-(unsigned)splitLine:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(BOOL)arg4 floatingCausedWrap:(BOOL*)arg5 skipHint:(double*)arg6 userInfo:(id)arg7;
-(double)nextUnobstructedSpanStartingAt:(CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;

@end
