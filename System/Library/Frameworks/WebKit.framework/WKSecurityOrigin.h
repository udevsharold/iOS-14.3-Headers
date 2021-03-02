/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKSecurityOrigin : NSObject <WKObject> {

	ObjectStorage<API::SecurityOrigin> _securityOrigin;

}

@property (nonatomic,copy,readonly) NSString * protocol; 
@property (nonatomic,copy,readonly) NSString * host; 
@property (nonatomic,readonly) long long port; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)port;
-(NSString *)host;
-(NSString *)protocol;
-(void)dealloc;
-(NSString *)description;
-(Object*)_apiObject;
@end
