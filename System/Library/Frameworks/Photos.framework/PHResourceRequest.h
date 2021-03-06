/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface PHResourceRequest : NSObject <NSSecureCoding> {

	BOOL _wantsProgress;
	NSString* _taskIdentifier;
	NSURL* _assetObjectIDURL;

}

@property (nonatomic,readonly) NSString * taskIdentifier;              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * assetObjectIDURL;               //@synthesize assetObjectIDURL=_assetObjectIDURL - In the implementation block
@property (assign,nonatomic) BOOL wantsProgress;                       //@synthesize wantsProgress=_wantsProgress - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)taskIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)wantsProgress;
-(id)description;
-(id)initWithTaskIdentifier:(id)arg1 assetObjectIDURL:(id)arg2 ;
-(id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 ;
-(NSURL *)assetObjectIDURL;
-(void)setWantsProgress:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

