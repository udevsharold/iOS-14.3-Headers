/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKCloudServiceController, NSMapTable, NSString;

@interface LPiTunesStoreInformation : NSObject {

	SKCloudServiceController* _cloudServiceController;
	NSMapTable* _changeHandlers;
	unsigned long long _capabilities;
	BOOL _hasUpdatedCapabilities;
	NSString* _storefrontIdentifier;

}

@property (readonly) unsigned long long capabilities; 
@property (copy,readonly) NSString * storefrontIdentifier; 
+(id)shared;
+(unsigned long long)_convertCapabilities:(unsigned long long)arg1 ;
+(id)_convertNewStorefrontIdentifier:(id)arg1 ;
-(NSString *)storefrontIdentifier;
-(id)init;
-(void)registerForStoreAvailablityChangesWithToken:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)unregisterForStoreAvailablityChangesWithToken:(id)arg1 ;
-(unsigned long long)userStateForMediaStorefrontIdentifier:(id)arg1 ;
-(void)_setStorefrontIdentifier:(id)arg1 ;
-(void)_storefrontDidChangeNotification;
-(void)_capabilitiesDidChangeNotification;
-(void)_notifyChangeHandlers;
-(unsigned long long)capabilities;
-(void)_setCapabilities:(unsigned long long)arg1 ;
@end
