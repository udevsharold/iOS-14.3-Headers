/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBIconListLayoutProvider.h>

@protocol SBIconListLayoutProvider;
@class NSMutableDictionary;

@interface SBHMappedIconListLayoutProvider : NSObject <SBIconListLayoutProvider> {

	NSMutableDictionary* _mappedIconLocations;
	id<SBIconListLayoutProvider> _targetListLayoutProvider;

}

@property (nonatomic,readonly) id<SBIconListLayoutProvider> targetListLayoutProvider;              //@synthesize targetListLayoutProvider=_targetListLayoutProvider - In the implementation block
-(id<SBIconListLayoutProvider>)targetListLayoutProvider;
-(id)initWithTargetListLayoutProvider:(id)arg1 ;
-(void)mapIconLocation:(id)arg1 toIconLocation:(id)arg2 ;
-(id)layoutForIconLocation:(id)arg1 ;
@end
