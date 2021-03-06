/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface HDDemoDataBaseSampleGeneratorObjectCollection : NSObject {

	NSMutableSet* _objectsFromPhone;
	NSMutableSet* _objectsFromWatch;
	NSMutableDictionary* _objectsFromPhoneApps;
	NSMutableDictionary* _objectUUIDToAssocatedObjectUUIDs;

}
-(id)init;
-(void)addObjectFromPhone:(id)arg1 ;
-(void)addObjectsFromPhone:(id)arg1 ;
-(void)addObjectsFromWatch:(id)arg1 ;
-(void)addObjectFromWatch:(id)arg1 ;
-(void)addObjects:(id)arg1 fromPhoneAppWithBundleIdentifier:(id)arg2 ;
-(id)objectsFromPhone;
-(id)objectsFromWatch;
-(id)objectsFromPhoneApps;
-(void)setAssociatedObjectUUIDs:(id)arg1 forObjectUUID:(id)arg2 ;
-(void)enumerateObjectAssociations:(/*^block*/id)arg1 ;
@end

