/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSHashTable;

@interface MFAddressBookManager : NSObject {

	void* _addressBook;
	os_unfair_lock_s _lock;
	NSHashTable* _clients;

}
+(id)sharedManager;
+(BOOL)isAuthorizedToUseAddressBook;
-(void)removeClient:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addClient:(id)arg1 ;
-(void*)addressBook;
-(id)_clientsArray;
-(void)_handleAddressBookChangeNotification;
-(void)_handleAddressBookPrefsChangeNotification;
@end

