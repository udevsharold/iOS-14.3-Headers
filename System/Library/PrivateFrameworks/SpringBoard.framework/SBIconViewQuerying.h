/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconViewQuerying <NSObject>
@optional
-(BOOL)isDisplayingIconView:(id)arg1 options:(unsigned long long)arg2;
-(void)enumerateIconViewQueryableChildrenWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2;
-(id)firstIconViewForIcon:(id)arg1 options:(unsigned long long)arg2;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2 options:(unsigned long long)arg3;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 options:(unsigned long long)arg3;
-(BOOL)isDisplayingIcon:(id)arg1 options:(unsigned long long)arg2;
-(void)enumerateDisplayedIconViewsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2;

@required
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
-(BOOL)isDisplayingIcon:(id)arg1;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2;
-(id)firstIconViewForIcon:(id)arg1;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
-(id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
-(BOOL)isDisplayingIconView:(id)arg1;
-(BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1;

@end

