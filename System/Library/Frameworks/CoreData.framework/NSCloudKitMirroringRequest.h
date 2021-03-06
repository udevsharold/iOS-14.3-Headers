/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreRequest.h>

@class NSUUID, NSCloudKitMirroringRequestOptions, CKSchedulerActivity;

@interface NSCloudKitMirroringRequest : NSPersistentStoreRequest {

	NSUUID* _requestIdentifier;
	NSCloudKitMirroringRequestOptions* _options;
	/*^block*/id _requestCompletionBlock;
	CKSchedulerActivity* _activity;

}

@property (nonatomic,readonly) CKSchedulerActivity * activity;                                //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) NSUUID * requestIdentifier;                                    //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSCloudKitMirroringRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) id requestCompletionBlock;                                //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
+(id)allRequestClasses;
-(unsigned long long)requestType;
-(CKSchedulerActivity *)activity;
-(NSUUID *)requestIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithActivity:(id)arg1 options:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)description;
-(BOOL)validateForUseWithStore:(id)arg1 error:(id*)arg2 ;
-(id)requestCompletionBlock;
-(NSCloudKitMirroringRequestOptions *)options;
@end

