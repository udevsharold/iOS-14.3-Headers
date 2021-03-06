/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSArray, NSString;

@interface SUScriptActivityViewController : SUScriptViewController {

	NSArray* _applicationActivities;
	NSArray* _providers;

}

@property (copy) id excludedActivityTypes; 
@property (readonly) NSString * activityTypeAddToReadingList; 
@property (readonly) NSString * activityTypeAssignToContact; 
@property (readonly) NSString * activityTypeCopyToPasteboard; 
@property (readonly) NSString * activityTypeMail; 
@property (readonly) NSString * activityTypeMessage; 
@property (readonly) NSString * activityTypePostToFacebook; 
@property (readonly) NSString * activityTypePostToFlickr; 
@property (readonly) NSString * activityTypePostToTwitter; 
@property (readonly) NSString * activityTypePostToVimeo; 
@property (readonly) NSString * activityTypePostToWeibo; 
@property (readonly) NSString * activityTypePrint; 
@property (readonly) NSString * activityTypeSaveToCameraRoll; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setExcludedActivityTypes:(id)arg1 ;
-(id)attributeKeys;
-(void)dealloc;
-(id)excludedActivityTypes;
-(id)_className;
-(id)scriptAttributeKeys;
-(id)newNativeViewController;
-(void)setTitle:(id)arg1 forActivityType:(id)arg2 ;
-(id)initWithScriptItemProviders:(id)arg1 applicationActivities:(id)arg2 ;
-(NSString *)activityTypeAddToReadingList;
-(NSString *)activityTypeAssignToContact;
-(NSString *)activityTypeCopyToPasteboard;
-(NSString *)activityTypeMail;
-(NSString *)activityTypeMessage;
-(NSString *)activityTypePostToFacebook;
-(NSString *)activityTypePostToFlickr;
-(NSString *)activityTypePostToTwitter;
-(NSString *)activityTypePostToVimeo;
-(NSString *)activityTypePostToWeibo;
-(NSString *)activityTypePrint;
-(NSString *)activityTypeSaveToCameraRoll;
@end

