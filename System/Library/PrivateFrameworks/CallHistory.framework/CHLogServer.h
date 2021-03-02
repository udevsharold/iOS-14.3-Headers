/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CallHistory-Structs.h>
#import <CallHistory/CHSynchronizable.h>

@interface CHLogServer : CHSynchronizable {

	unordered_map<const char *, os_log_s *, std::__1::hash<const char *>, std::__1::equal_to<const char *>, std::__1::allocator<std::__1::pair<const char *const, os_log_s *> > >* fLogHandles;

}
+(id)instance;
-(id)init;
-(os_log_sRef)logHandleForDomain:(const char*)arg1 ;
-(os_log_sRef)logHandleForDomainSync:(const char*)arg1 ;
-(void)createLogHandleForDomainSync:(const char*)arg1 ;
@end
