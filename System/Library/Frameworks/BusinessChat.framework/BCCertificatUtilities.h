/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BusinessChat/BusinessChat-Structs.h>
@interface BCCertificatUtilities : NSObject
+(SecPolicyRef)sslPolicyForHost:(id)arg1 client:(BOOL)arg2 ;
+(BOOL)trustIncludesRevokedCertificate:(SecTrustRef)arg1 ;
+(SecTrustRef)trustReferenceWithCertificates:(id)arg1 forPolicy:(SecPolicyRef)arg2 ;
@end
