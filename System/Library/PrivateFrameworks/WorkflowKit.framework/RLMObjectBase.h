/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/RLMThreadConfined.h>
#import <libobjc.A.dylib/RLMThreadConfined_Private.h>

@class RLMRealm, RLMObjectSchema, NSString;

@interface RLMObjectBase : NSObject <RLMThreadConfined, RLMThreadConfined_Private> {

	BasicRow<realm::Table>* _row;
	RLMObservationInfo* _observationInfo;
	RLMClassInfo* _info;
	RLMRealm* _realm;
	RLMObjectSchema* _objectSchema;

}

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (nonatomic,readonly) RLMRealm * realm; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id objectiveCMetadata; 
+(id)sharedSchema;
+(id)className;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)shouldIncludeInDefaultSchema;
+(void)initializeLinkedObjectSchemas;
+(Class)objectUtilClass:(BOOL)arg1 ;
+(id)_realmObjectName;
+(id)_realmColumnNames;
+(id)objectWithThreadSafeReference:(unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >*)arg1 metadata:(id)arg2 realm:(id)arg3 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(RLMRealm *)realm;
-(id)init;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)objectiveCMetadata;
-(void)dealloc;
-(unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >*)makeThreadSafeReference;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(BOOL)isInvalidated;
-(unsigned long long)hash;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)mutableArrayValueForKey:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)objectSchema;
-(id)initWithValue:(id)arg1 schema:(id)arg2 ;
-(id)initWithRealm:(id)arg1 schema:(id)arg2 ;
-(id)descriptionWithMaxDepth:(unsigned long long)arg1 ;
@end

