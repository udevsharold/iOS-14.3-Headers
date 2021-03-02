/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NSSQLStoreMappingGenerator : NSObject {

	NSMutableDictionary* _names;

}
+(id)defaultMappingGenerator;
+(void)invalidate;
-(id)init;
-(id)uniqueNameWithBase:(id)arg1 ;
-(void)dealloc;
-(id)generateTableName:(id)arg1 isAncillary:(BOOL)arg2 ;
-(id)newGeneratedPropertyName:(id)arg1 ;
-(id)newUniqueNameWithBase:(unsigned short*)arg1 withLength:(unsigned long long)arg2 ;
@end
