/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, BMBehaviorDatabaseMetadata, NSPersistentContainer, NSManagedObjectContext, BMManagedObjectConverter;

@interface BMBehaviorStorage : NSObject {

	BOOL _readOnly;
	NSURL* _URL;
	BMBehaviorDatabaseMetadata* _metadata;
	NSPersistentContainer* _container;
	NSManagedObjectContext* _context;
	BMManagedObjectConverter* _converter;

}

@property (nonatomic,retain) NSPersistentContainer * container;                  //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * context;                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) BMManagedObjectConverter * converter;               //@synthesize converter=_converter - In the implementation block
@property (nonatomic,retain) BMBehaviorDatabaseMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                          //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) BOOL readOnly;                                    //@synthesize readOnly=_readOnly - In the implementation block
+(id)defaultURL;
-(void)setMetadata:(BMBehaviorDatabaseMetadata *)arg1 ;
-(id)initWithURL:(id)arg1 readOnly:(BOOL)arg2 ;
-(NSPersistentContainer *)container;
-(void)setContainer:(NSPersistentContainer *)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg1 readOnly:(BOOL)arg2 error:(id*)arg3 ;
-(BMBehaviorDatabaseMetadata *)metadata;
-(void)resetStorageWithMetadata:(id)arg1 error:(id*)arg2 ;
-(BOOL)readOnly;
-(void)setURL:(NSURL *)arg1 ;
-(id)fetchRulesWithAbsoluteSupport:(unsigned long long)arg1 support:(double)arg2 confidence:(double)arg3 conviction:(double)arg4 lift:(double)arg5 rulePowerFactor:(double)arg6 uniqueDaysLastWeek:(unsigned long long)arg7 uniqueDaysTotal:(unsigned long long)arg8 filters:(id)arg9 limit:(unsigned long long)arg10 error:(id*)arg11 ;
-(void)setConverter:(BMManagedObjectConverter *)arg1 ;
-(id)fetchRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3 error:(id*)arg4 ;
-(void)saveRules:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(id)fetchRulesWithSupport:(double)arg1 confidence:(double)arg2 filters:(id)arg3 limit:(unsigned long long)arg4 error:(id*)arg5 ;
-(BMManagedObjectConverter *)converter;
-(NSManagedObjectContext *)context;
-(NSURL *)URL;
@end

