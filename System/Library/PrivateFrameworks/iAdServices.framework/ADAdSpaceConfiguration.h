/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAdServices/iAdServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSSet;

@interface ADAdSpaceConfiguration : NSObject <NSSecureCoding, NSCopying> {

	int _creativeType;
	float _containerWidth;
	float _containerHeight;
	float _reorientedContainerWidth;
	float _reorientedContainerHeight;
	long long _options;
	NSString* _identifier;
	NSURL* _serverURL;
	NSString* _advertisingSection;
	NSString* _authenticationUserName;
	NSSet* _context;
	NSString* _adSpaceContextJSON;

}

@property (assign,nonatomic) int creativeType;                               //@synthesize creativeType=_creativeType - In the implementation block
@property (assign,nonatomic) long long options;                              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSURL * serverURL;                              //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,retain) NSString * advertisingSection;                  //@synthesize advertisingSection=_advertisingSection - In the implementation block
@property (nonatomic,retain) NSString * authenticationUserName;              //@synthesize authenticationUserName=_authenticationUserName - In the implementation block
@property (nonatomic,copy) NSSet * context;                                  //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * adSpaceContextJSON;                    //@synthesize adSpaceContextJSON=_adSpaceContextJSON - In the implementation block
@property (assign,nonatomic) float containerWidth;                           //@synthesize containerWidth=_containerWidth - In the implementation block
@property (assign,nonatomic) float containerHeight;                          //@synthesize containerHeight=_containerHeight - In the implementation block
@property (assign,nonatomic) float reorientedContainerWidth;                 //@synthesize reorientedContainerWidth=_reorientedContainerWidth - In the implementation block
@property (assign,nonatomic) float reorientedContainerHeight;                //@synthesize reorientedContainerHeight=_reorientedContainerHeight - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setServerURL:(NSURL *)arg1 ;
-(void)setContainerHeight:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)serverURL;
-(void)setReorientedContainerHeight:(float)arg1 ;
-(void)setCreativeType:(int)arg1 ;
-(void)dealloc;
-(void)setAdSpaceContextJSON:(NSString *)arg1 ;
-(NSString *)advertisingSection;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)authenticationUserName;
-(id)initWithCoder:(id)arg1 ;
-(float)reorientedContainerHeight;
-(void)setAdvertisingSection:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setContext:(NSSet *)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(void)setReorientedContainerWidth:(float)arg1 ;
-(float)reorientedContainerWidth;
-(float)containerWidth;
-(NSSet *)context;
-(int)creativeType;
-(void)setAuthenticationUserName:(NSString *)arg1 ;
-(float)containerHeight;
-(void)setContainerWidth:(float)arg1 ;
-(NSString *)adSpaceContextJSON;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)options;
@end

