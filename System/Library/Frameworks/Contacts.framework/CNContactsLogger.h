/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNContactsLogger <NSObject>
@required
-(void)serviceError:(id)arg1;
-(void)deleteImageRecentsMetadataRequestFailed:(id)arg1;
-(void)fetchingContactCount:(/*^block*/id)arg1;
-(void)postingNotification:(/*^block*/id)arg1;
-(void)fetchingContacts:(/*^block*/id)arg1;
-(void)setContactImageData:(id)arg1 format:(const char*)arg2 cropRect:(CGRect)arg3;
-(void)didFetchContacts:(id)arg1 error:(id)arg2;
-(void)accessAuthorizationStatusWasDenied;
-(void)servicingContactsRequest:(/*^block*/id)arg1;
-(void)fetchingContactSectionCounts:(/*^block*/id)arg1;
-(void)fetchingGroups:(/*^block*/id)arg1;
-(void)didFetchEncodedContacts:(id)arg1 error:(id)arg2;
-(void)updatingContact:(id)arg1;
-(void)unregisteringForChangeHistory:(/*^block*/id)arg1;
-(void)XPCConnectionWasInvalidated;
-(void)fetchingContactWithUserActivity:(/*^block*/id)arg1;
-(void)fetchingContactIdentifierWithMatchingDictionary:(/*^block*/id)arg1;
-(void)fetchContactsProgressivelyMatchingPredicate:(id)arg1 unifyResults:(BOOL)arg2 keysToFetch:(id)arg3;
-(void)changingMeContact:(/*^block*/id)arg1;
-(void)fetchContactsMatchingPredicate:(id)arg1 unifyResults:(BOOL)arg2 keysToFetch:(id)arg3;
-(void)changedMeContact:(id)arg1;
-(void)contactsAccessWasGranted:(BOOL)arg1;
-(void)fetchingChangeHistory:(/*^block*/id)arg1;
-(void)SPIUsageLackingEntitlementRejectedForPID:(int)arg1;
-(void)applyContactUpdateOfKind:(const char*)arg1 value:(id)arg2 property:(id)arg3;
-(void)requestAuthorizationWasDenied;
-(void)fetchingMeContactIdentifier:(/*^block*/id)arg1;
-(void)addingContacts:(id)arg1 toContainerWithIdentifier:(id)arg2;
-(void)clearingChangeHistory:(/*^block*/id)arg1;
-(void)settingDefaultAccount:(/*^block*/id)arg1;
-(void)deletingContact:(id)arg1;
-(void)errorWhenQueryingTetheredSyncData:(id)arg1;
-(void)noAccessToContactsWithError:(id)arg1;
-(void)fetchingContactsBatch:(/*^block*/id)arg1;
-(void)fetchingContainers:(/*^block*/id)arg1;
-(void)postingNotificationWithName:(id)arg1;
-(void)saveRequestFailed:(id)arg1;
-(void)saving:(/*^block*/id)arg1;
-(void)internalError:(id)arg1;
-(void)requestingAccessForContacts:(/*^block*/id)arg1;
-(void)SPIUsageLackingEntitlementGrantedForPID:(int)arg1;
-(void)saveRequestInvalid:(id)arg1;
-(void)removeContactImageData;
-(void)setContactImageData:(id)arg1;
-(void)XPCConnectionWasInterrupted;
-(void)fetchingDefaultContainerIdentifier:(/*^block*/id)arg1;
-(void)setContactImageDataZeroCropRect:(id)arg1 format:(const char*)arg2;
-(void)resettingSortDataIfNeeded:(/*^block*/id)arg1;
-(void)registeringForChangeHistory:(/*^block*/id)arg1;
-(void)fetchEncodedContactsMatchingPredicate:(id)arg1 unifyResults:(BOOL)arg2 keysToFetch:(id)arg3;

@end

