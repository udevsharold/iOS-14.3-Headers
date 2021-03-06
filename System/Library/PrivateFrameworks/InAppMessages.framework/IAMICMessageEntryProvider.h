/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IAMMessageEntryProvider.h>

@protocol IAMMessageEntryProviderDelegate;
@class ICInAppMessageManager, NSString;

@interface IAMICMessageEntryProvider : NSObject <IAMMessageEntryProvider> {

	ICInAppMessageManager* _iTunesCloudIAMManager;
	id<IAMMessageEntryProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IAMMessageEntryProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)messageEntriesForBundleIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleMessagesDidChangeNotification;
-(void)setDelegate:(id<IAMMessageEntryProviderDelegate>)arg1 ;
-(id<IAMMessageEntryProviderDelegate>)delegate;
@end

