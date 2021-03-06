/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSStoreMapping.h>

@class NSEntityDescription, NSDictionary, NSArray, NSString;

@interface NSEntityStoreMapping : NSStoreMapping {

	NSEntityDescription* _entity;
	NSDictionary* _propertyMappings;
	NSArray* _primaryKeys;
	BOOL _isSingleTableEntity;
	NSString* _subentityColumn;
	unsigned _subentityID;

}
-(void)setEntity:(id)arg1 ;
-(id)primaryKeys;
-(id)subentityColumn;
-(id)createTableStatement;
-(unsigned)subentityID;
-(id)initWithEntity:(id)arg1 ;
-(void)dealloc;
-(BOOL)isSingleTableEntity;
-(id)entity;
-(void)setSubentityID:(unsigned)arg1 ;
-(id)propertyMappings;
-(void)setPropertyMappings:(id)arg1 ;
-(void)setSubentityColumn:(id)arg1 ;
-(void)setPrimaryKeys:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSingleTableEntity:(BOOL)arg1 ;
@end

