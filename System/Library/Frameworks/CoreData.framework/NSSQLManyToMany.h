/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLRelationship.h>

@class NSString;

@interface NSSQLManyToMany : NSSQLRelationship {

	NSString* _correlationTableName;
	NSString* _columnName;
	NSString* _orderColumnName;

}
-(id)columnName;
-(id)correlationTableName;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(id)orderColumnName;
-(BOOL)isReflexive;
-(void)dealloc;
-(id)inverseColumnName;
-(id)inverseOrderColumnName;
-(void)_setInverseManyToMany:(id)arg1 ;
-(BOOL)isTableSchemaEqual:(id)arg1 ;
-(void)_setColumnName:(id)arg1 ;
-(unsigned char)columnSQLType;
-(unsigned char)orderColumnSQLType;
-(void)_setCorrelationTableName:(id)arg1 ;
-(id)inverseManyToMany;
-(void)_setOrderColumnName:(id)arg1 ;
-(BOOL)isMaster;
@end
