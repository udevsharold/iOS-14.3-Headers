/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface NSURLSessionTaskHTTPAuthenticator : NSObject <NSCopying> {

	NSSet* _statusCodes;

}

@property (copy) NSSet * statusCodes;              //@synthesize statusCodes=_statusCodes - In the implementation block
+(id)sessionTaskHTTPAuthenticatorWithContext:(id)arg1 statusCodes:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setStatusCodes:(NSSet *)arg1 ;
-(id)initWithStatusCodes:(id)arg1 ;
-(NSSet *)statusCodes;
-(void)getAuthenticationHeadersForTask:(id)arg1 task:(id)arg2 response:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

