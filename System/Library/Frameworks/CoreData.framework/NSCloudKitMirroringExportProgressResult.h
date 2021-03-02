/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSCloudKitMirroringResult.h>

@class NSDictionary;

@interface NSCloudKitMirroringExportProgressResult : NSCloudKitMirroringResult {

	NSDictionary* _objectIDToLastExportedToken;

}

@property (nonatomic,readonly) NSDictionary * objectIDToLastExportedToken;              //@synthesize objectIDToLastExportedToken=_objectIDToLastExportedToken - In the implementation block
-(void)dealloc;
-(NSDictionary *)objectIDToLastExportedToken;
-(id)initWithRequest:(id)arg1 objectIDToLastExportedToken:(id)arg2 error:(id)arg3 ;
@end
