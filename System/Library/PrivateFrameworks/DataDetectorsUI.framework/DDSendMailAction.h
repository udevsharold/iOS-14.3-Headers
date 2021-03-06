/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDAction.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class NSString;

@interface DDSendMailAction : DDAction <MFMailComposeViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)icon;
-(id)notificationTitle;
-(id)localizedName;
-(int)interactionType;
-(id)initWithURL:(id)arg1 result:(DDResultRef)arg2 context:(id)arg3 ;
-(void)performFromView:(id)arg1 ;
-(BOOL)canBePerformedByOpeningURL;
-(id)notificationIconBundleIdentifier;
-(id)notificationURL;
@end

