/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PMLTrainingDatabaseMigrations : NSObject {

	NSDictionary* _migrations;

}

@property (nonatomic,readonly) NSDictionary * migrations;              //@synthesize migrations=_migrations - In the implementation block
@property (nonatomic,readonly) unsigned maxVersion; 
+(id)skipFromZeroSchema:(unsigned*)arg1 ;
+(id)mockMigrationsByAddingQueries:(id)arg1 ;
-(id)init;
-(NSDictionary *)migrations;
-(unsigned)maxVersion;
-(id)initWithMigrations:(id)arg1 ;
@end

