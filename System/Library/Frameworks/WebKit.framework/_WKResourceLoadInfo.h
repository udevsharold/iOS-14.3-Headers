/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _WKFrameHandle, NSURL, NSString, NSDate;

@interface _WKResourceLoadInfo : NSObject <WKObject, NSSecureCoding> {

	ObjectStorage<API::ResourceLoadInfo> _info;

}

@property (nonatomic,readonly) unsigned long long resourceLoadID; 
@property (nonatomic,readonly) _WKFrameHandle * frame; 
@property (nonatomic,readonly) _WKFrameHandle * parentFrame; 
@property (nonatomic,readonly) NSURL * originalURL; 
@property (nonatomic,readonly) NSString * originalHTTPMethod; 
@property (nonatomic,readonly) NSDate * eventTimestamp; 
@property (nonatomic,readonly) BOOL loadedFromCache; 
@property (nonatomic,readonly) long long resourceType; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(long long)resourceType;
-(NSURL *)originalURL;
-(_WKFrameHandle *)frame;
-(_WKFrameHandle *)parentFrame;
-(void)dealloc;
-(unsigned long long)resourceLoadID;
-(NSString *)originalHTTPMethod;
-(BOOL)loadedFromCache;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)eventTimestamp;
-(Object*)_apiObject;
-(void)encodeWithCoder:(id)arg1 ;
@end
