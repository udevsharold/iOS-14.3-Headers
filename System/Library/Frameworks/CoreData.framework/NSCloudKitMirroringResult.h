/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreResult.h>

@class NSError, NSCloudKitMirroringRequest;

@interface NSCloudKitMirroringResult : NSPersistentStoreResult {

	BOOL _success;
	BOOL _madeChanges;
	NSError* _error;
	NSCloudKitMirroringRequest* _request;

}

@property (nonatomic,readonly) NSCloudKitMirroringRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL success;                                      //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL madeChanges;                                  //@synthesize madeChanges=_madeChanges - In the implementation block
@property (nonatomic,readonly) NSError * error;                                   //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(NSCloudKitMirroringRequest *)request;
-(void)dealloc;
-(id)description;
-(BOOL)madeChanges;
-(BOOL)success;
-(id)initWithRequest:(id)arg1 success:(BOOL)arg2 madeChanges:(BOOL)arg3 error:(id)arg4 ;
@end
