/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, ENExposureClassification, NSUUID, NSURL, NSString, ENRegion;

@interface ENExposureNotification : NSObject <NSSecureCoding> {

	NSDate* _legacyDate;
	BOOL _revoked;
	ENExposureClassification* _classification;
	NSUUID* _identifier;
	NSURL* _learnMoreURL;
	NSString* _localizedBodyText;
	NSString* _localizedDetailBodyText;
	NSString* _localizedSubjectText;
	NSDate* _notificationDate;
	ENRegion* _region;

}

@property (nonatomic,retain) ENExposureClassification * classification;              //@synthesize classification=_classification - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * learnMoreURL;                                     //@synthesize learnMoreURL=_learnMoreURL - In the implementation block
@property (nonatomic,copy) NSString * localizedBodyText;                             //@synthesize localizedBodyText=_localizedBodyText - In the implementation block
@property (nonatomic,copy) NSString * localizedDetailBodyText;                       //@synthesize localizedDetailBodyText=_localizedDetailBodyText - In the implementation block
@property (nonatomic,copy) NSString * localizedSubjectText;                          //@synthesize localizedSubjectText=_localizedSubjectText - In the implementation block
@property (nonatomic,copy) NSDate * notificationDate;                                //@synthesize notificationDate=_notificationDate - In the implementation block
@property (nonatomic,copy) ENRegion * region;                                        //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) BOOL revoked;                                           //@synthesize revoked=_revoked - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date; 
+(BOOL)supportsSecureCoding;
-(void)setRegion:(ENRegion *)arg1 ;
-(ENRegion *)region;
-(NSDate *)date;
-(void)setClassification:(ENExposureClassification *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setRevoked:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)learnMoreURL;
-(NSUUID *)identifier;
-(void)setLearnMoreURL:(NSURL *)arg1 ;
-(BOOL)revoked;
-(ENExposureClassification *)classification;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)localizedBodyText;
-(void)setLocalizedBodyText:(NSString *)arg1 ;
-(NSString *)localizedDetailBodyText;
-(void)setLocalizedDetailBodyText:(NSString *)arg1 ;
-(NSString *)localizedSubjectText;
-(void)setLocalizedSubjectText:(NSString *)arg1 ;
-(NSDate *)notificationDate;
-(void)setNotificationDate:(NSDate *)arg1 ;
@end
