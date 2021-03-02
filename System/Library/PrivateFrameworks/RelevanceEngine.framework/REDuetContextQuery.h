/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSSet, NSUUID, NSString, _CDContextualPredicate, _CDMDCSContextualPredicate;

@interface REDuetContextQuery : NSObject {

	NSArray* _searchKeyPaths;
	/*^block*/id _evalBlock;
	NSSet* _devices;
	NSUUID* _uuid;
	NSString* _name;
	_CDContextualPredicate* _predicate;
	_CDMDCSContextualPredicate* _remotePredicate;

}

@property (nonatomic,readonly) NSUUID * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) _CDContextualPredicate * predicate;                        //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) _CDMDCSContextualPredicate * remotePredicate;              //@synthesize remotePredicate=_remotePredicate - In the implementation block
@property (nonatomic,readonly) NSString * registrationID; 
@property (nonatomic,readonly) NSSet * keyPaths; 
@property (nonatomic,retain) NSSet * devices;                                             //@synthesize devices=_devices - In the implementation block
-(NSSet *)devices;
-(void)setDevices:(NSSet *)arg1 ;
-(NSSet *)keyPaths;
-(NSUUID *)uuid;
-(_CDContextualPredicate *)predicate;
-(NSString *)name;
-(id)initWithPredicate:(id)arg1 remotePredicate:(id)arg2 name:(id)arg3 evaluationBlock:(/*^block*/id)arg4 ;
-(NSString *)registrationID;
-(id)_localRegistrationWithCallback:(/*^block*/id)arg1 ;
-(id)_remoteRegistrationForDevice:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)_sortedKeyPaths:(id)arg1 ;
-(id)_keyPathsForDevice:(id)arg1 ;
-(id)_localKeyPaths;
-(id)createRegistrationsWithCallback:(/*^block*/id)arg1 ;
-(id)valueFromUserContext:(id)arg1 ;
-(_CDMDCSContextualPredicate *)remotePredicate;
@end
