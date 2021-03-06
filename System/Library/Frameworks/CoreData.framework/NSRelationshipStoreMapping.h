/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPropertyStoreMapping.h>

@class NSString, NSArray;

@interface NSRelationshipStoreMapping : NSPropertyStoreMapping {

	NSString* _destinationEntityExternalName;
	NSArray* _foreignKeys;
	NSArray* _joins;
	unsigned _joinSemantic;

}
-(id)foreignKeys;
-(void)setForeignKeys:(id)arg1 ;
-(void)dealloc;
-(id)destinationEntityExternalName;
-(id)relationship;
-(void)setJoinSemantic:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)joins;
-(void)setJoins:(id)arg1 ;
-(unsigned)joinSemantic;
-(id)constraintDefinitions;
-(id)columnDefinitions;
-(void)setDestinationEntityExternalName:(id)arg1 ;
@end

