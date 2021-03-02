/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFArrayParameterEventObserver <WFParameterEventObserver>
@optional
-(void)arrayParameter:(id)arg1 itemWasAppended:(id)arg2;
-(void)arrayParameter:(id)arg1 itemWasMovedFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
-(void)arrayParameter:(id)arg1 itemWasUpdatedAtIndex:(unsigned long long)arg2 toValue:(id)arg3;
-(void)arrayParameter:(id)arg1 itemWasDeletedAtIndex:(unsigned long long)arg2;
-(void)arrayParameter:(id)arg1 confirmDeletionOfItemAtIndex:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3;

@end
