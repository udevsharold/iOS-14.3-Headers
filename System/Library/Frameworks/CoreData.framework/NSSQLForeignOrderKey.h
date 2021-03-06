/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLColumn.h>

@class NSString, NSSQLForeignKey;

@interface NSSQLForeignOrderKey : NSSQLColumn {

	NSString* _name;
	NSSQLForeignKey* _foreignKey;

}
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(void)_setName:(id)arg1 ;
-(id)foreignKey;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2 ;
-(id)toOneRelationship;
-(void)dealloc;
-(id)initWithEntity:(id)arg1 foreignKey:(id)arg2 ;
-(id)name;
-(void)setFKForReadOnlyFetch:(id)arg1 ;
@end

