/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MorphunAssetsUpdater.framework/MorphunAssetsUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/Message.h>

@protocol OS_xpc_object;
@class NSObject;

@interface GetAssetPathsMessage : NSObject <Message> {

	NSObject*<OS_xpc_object> message;

}

@property (readonly) NSObject*<OS_xpc_object> message; 
-(NSObject*<OS_xpc_object>)message;
-(id)init;
-(int)type;
@end

