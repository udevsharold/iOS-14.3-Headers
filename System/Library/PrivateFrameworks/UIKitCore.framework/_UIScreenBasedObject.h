/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIScreen, NSDictionary;


@protocol _UIScreenBasedObject <NSObject>
@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) NSDictionary * _options; 
@required
-(NSDictionary *)_options;
-(BOOL)_matchingOptions:(id)arg1;
-(UIScreen *)_intendedScreen;
-(id)_initWithScreen:(id)arg1 options:(id)arg2;

@end
