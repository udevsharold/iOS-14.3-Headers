/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BoardServices/BSXPCServiceConnectionContext.h>

@class NSString;

@interface BSXPCServiceConnectionRootContext : BSXPCServiceConnectionContext {

	unsigned long long _unique;
	AQ __uniqueChildCounter;
	NSString* _eDesc;

}
-(BOOL)isRoot;
-(id)endpointDescription;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
@end

