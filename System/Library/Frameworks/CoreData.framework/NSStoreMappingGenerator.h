/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSStoreMappingGenerator : NSObject
+(id)defaultMappingGenerator;
+(void)invalidate;
-(id)primaryKeyForEntity:(id)arg1 ;
-(id)joinsForRelationship:(id)arg1 ;
-(id)mappingForAttribute:(id)arg1 forConfigurationWithName:(id)arg2 ;
-(id)externalNameForPropertyName:(id)arg1 ;
-(id)mappingsForConfigurationWithName:(id)arg1 inModel:(id)arg2 ;
-(id)externalNameForEntityName:(id)arg1 ;
-(id)mappingForEntity:(id)arg1 forConfigurationWithName:(id)arg2 ;
-(id)internalNameForPropertyName:(id)arg1 version:(int)arg2 ;
-(id)internalNameForEntityName:(id)arg1 version:(int)arg2 ;
-(id)mappingsDictForConfigurationWithName:(id)arg1 inModel:(id)arg2 ;
-(id)mappingForRelationship:(id)arg1 forConfigurationWithName:(id)arg2 ;
@end

