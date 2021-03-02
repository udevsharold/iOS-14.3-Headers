/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDFHIRCredential;

@interface _HDWrappedFHIRCredential : NSObject {

	BOOL _invalidated;
	HDFHIRCredential* _originalCredential;
	HDFHIRCredential* _refreshedCredential;

}

@property (nonatomic,copy,readonly) HDFHIRCredential * originalCredential;               //@synthesize originalCredential=_originalCredential - In the implementation block
@property (nonatomic,copy,readonly) HDFHIRCredential * refreshedCredential;              //@synthesize refreshedCredential=_refreshedCredential - In the implementation block
@property (getter=isInvalidated) BOOL invalidated;                                       //@synthesize invalidated=_invalidated - In the implementation block
-(void)setInvalidated:(BOOL)arg1 ;
-(BOOL)isInvalidated;
-(id)_initWithCredential:(id)arg1 ;
-(void)didRefreshCredential:(id)arg1 ;
-(HDFHIRCredential *)refreshedCredential;
-(HDFHIRCredential *)originalCredential;
@end
