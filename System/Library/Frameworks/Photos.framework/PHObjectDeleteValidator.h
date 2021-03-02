/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSEntityDescription, NSManagedObjectContext;

@interface PHObjectDeleteValidator : NSObject {

	NSMutableSet* _deletedObjectIDs;
	NSEntityDescription* _entity;
	NSManagedObjectContext* _context;

}
-(BOOL)validateForDeleteWithRequestsByObjectID:(id)arg1 error:(id*)arg2 ;
-(BOOL)recordObjectID:(id)arg1 ;
-(id)initWithEntityName:(id)arg1 managedObjectContext:(id)arg2 ;
@end
