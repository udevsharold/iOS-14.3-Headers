/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSQueryGenerationToken.h>

@class NSString, _PFWeakReference;

@interface _NSQueryGenerationToken : NSQueryGenerationToken {

	NSString* _storeIdentifier;
	_PFWeakReference* _store;
	id _generationIdentifier;
	struct {
		unsigned _isCompound : 1;
		unsigned _isSingleton : 1;
		unsigned _freeValueOnDealloc : 1;
		unsigned _isUnmoored : 1;
		unsigned _reservedFlags : 12;
	}  _flags;

}
+(BOOL)supportsSecureCoding;
-(id)persistentStoreCoordinator;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)retain;
-(BOOL)isEqual:(id)arg1 ;
-(oneway void)release;
-(void)encodeWithCoder:(id)arg1 ;
@end

