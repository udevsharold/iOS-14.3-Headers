/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/AMSBagDataSourceProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, AMSProcessInfo, NSString, AMSBagKeySet, NSArray, NSDictionary;

@interface AMSBagFrozenDataSource : NSObject <AMSBagDataSourceProtocol, NSCopying, NSSecureCoding> {

	NSDate* _expirationDate;
	AMSProcessInfo* _processInfo;
	NSString* _profile;
	NSString* _profileVersion;
	AMSBagKeySet* _bagKeySet;
	NSArray* _cookies;
	NSDictionary* _data;

}

@property (nonatomic,readonly) AMSBagKeySet * bagKeySet;                       //@synthesize bagKeySet=_bagKeySet - In the implementation block
@property (nonatomic,readonly) NSArray * cookies;                              //@synthesize cookies=_cookies - In the implementation block
@property (nonatomic,readonly) NSDictionary * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo;              //@synthesize processInfo=_processInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * profile;                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) NSString * profileVersion;                 //@synthesize profileVersion=_profileVersion - In the implementation block
@property (nonatomic,retain) NSString * descriptionExtended; 
@property (nonatomic,copy) id dataSourceChangedHandler; 
@property (nonatomic,copy) id dataSourceDataInvalidatedHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(AMSProcessInfo *)processInfo;
-(NSString *)profileVersion;
-(id)bagKeyInfoForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)data;
-(NSString *)profile;
-(BOOL)isLoaded;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)description;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(id)_initWithProfile:(id)arg1 profileVersion:(id)arg2 data:(id)arg3 expirationDate:(id)arg4 bagKeySet:(id)arg5 cookies:(id)arg6 processInfo:(id)arg7 ;
-(NSArray *)cookies;
-(id)valueForURLVariable:(id)arg1 account:(id)arg2 ;
-(AMSBagKeySet *)bagKeySet;
-(void)encodeWithCoder:(id)arg1 ;
@end
