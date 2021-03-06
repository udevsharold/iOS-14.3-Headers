/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BoardServices/BoardServices-Structs.h>
@class BSServiceDomainSpecification, BSXPCServiceConnectionListener, NSString, NSDictionary, NSMutableArray;

@interface BSServiceDomain : NSObject {

	BSServiceDomainSpecification* _specification;
	os_unfair_lock_s _lock;
	BSXPCServiceConnectionListener* _xpcListener;
	NSString* _listenerEndpointDescription;
	NSDictionary* _identifierToService;
	NSMutableArray* _lock_incomingConnections;

}
-(id)init;
@end

