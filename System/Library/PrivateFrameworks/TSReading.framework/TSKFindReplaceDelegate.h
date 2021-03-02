/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKFindReplaceDelegate <NSObject>
@optional
-(BOOL)findReplaceController:(id)arg1 shouldSkipSearchReference:(id)arg2;
-(void)findReplaceController:(id)arg1 didWrapInDirection:(unsigned long long)arg2;
-(void)findReplaceControllerDidFindNoResults:(id)arg1;
-(void)willScrollToReference:(id)arg1;

@required
-(void)setSelection:(id)arg1 onModel:(id)arg2 withFlags:(unsigned long long)arg3;
-(NSRange*)visibleRootIndexRange;

@end
