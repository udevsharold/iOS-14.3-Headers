/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCalculationEngine.framework/TSCalculationEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCalculationEngine/TSCalculationEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, TSCECalculationEngine;

@interface TSCETablesByName : NSObject <NSCopying> {

	NSMutableDictionary* _tablesByTableNameByContainerName;
	TSCECalculationEngine* _calcEngine;

}
+(id)tableNameForTable:(id)arg1 ;
+(id)containerNameForTable:(id)arg1 ;
-(void)dropTable:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)removeAllObjects;
-(id)resolverMatchingName:(id)arg1 ;
-(id)resolversMatchingPrefix:(id)arg1 ;
-(BOOL)resolverNameIsUsed:(id)arg1 ;
-(id)initWithCalcEngine:(id)arg1 ;
-(void)dropTable:(id)arg1 withTableName:(id)arg2 withContainerName:(id)arg3 ;
-(void)addTable:(id)arg1 ;
-(id)tableForTableName:(id)arg1 containerName:(id)arg2 ;
-(void)renameTable:(id)arg1 fromName:(id)arg2 ;
-(id)anyTableForTableName:(id)arg1 ;
@end

