/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBIconListLayoutProvider.h>

@protocol SBIconListLayout;
@class NSDictionary;

@interface SBHCustomIconListLayoutProvider : NSObject <SBIconListLayoutProvider> {

	NSDictionary* _listLayouts;
	id<SBIconListLayout> _defaultLayout;

}

@property (nonatomic,copy,readonly) NSDictionary * listLayouts;                 //@synthesize listLayouts=_listLayouts - In the implementation block
@property (nonatomic,readonly) id<SBIconListLayout> defaultLayout;              //@synthesize defaultLayout=_defaultLayout - In the implementation block
-(id)init;
-(id<SBIconListLayout>)defaultLayout;
-(id)layoutForIconLocation:(id)arg1 ;
-(id)initWithListLayouts:(id)arg1 ;
-(NSDictionary *)listLayouts;
-(id)initWithListLayouts:(id)arg1 defaultLayout:(id)arg2 ;
@end
