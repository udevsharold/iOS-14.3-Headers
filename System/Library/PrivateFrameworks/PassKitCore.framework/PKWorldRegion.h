/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKWorldRegion : NSObject <NSSecureCoding> {

	unsigned long long _muid;
	int _resultProviderIdentifier;
	unsigned long long _type;
	double _latitude;
	double _longitude;
	double _latitudeDelta;
	double _longitudeDelta;
	NSString* _localizedName;
	NSString* _localeIdentifier;
	PKWorldRegion* _parentRegion;
	NSString* _identifier;
	NSString* _abbreviationCode;

}

@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long muid;                    //@synthesize muid=_muid - In the implementation block
@property (assign,nonatomic) int resultProviderIdentifier;               //@synthesize resultProviderIdentifier=_resultProviderIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * localizedName;                   //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * localeIdentifier;                //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,retain) NSString * abbreviationCode;                //@synthesize abbreviationCode=_abbreviationCode - In the implementation block
@property (assign,nonatomic) SCD_Struct_PK10 displayRegion; 
@property (nonatomic,retain) PKWorldRegion * parentRegion;               //@synthesize parentRegion=_parentRegion - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)mostConstrainingTypeInRegions:(id)arg1 ;
-(NSString *)localeIdentifier;
-(id)searchString;
-(SCD_Struct_PK10)displayRegion;
-(unsigned long long)muid;
-(id)init;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(void)setDisplayRegion:(SCD_Struct_PK10)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)description;
-(unsigned long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(PKWorldRegion *)parentRegion;
-(BOOL)isEqualToWorldRegion:(id)arg1 ;
-(NSString *)abbreviationCode;
-(id)regionOfType:(unsigned long long)arg1 ;
-(BOOL)isIncludedInRegions:(id)arg1 ;
-(int)resultProviderIdentifier;
-(void)setResultProviderIdentifier:(int)arg1 ;
-(void)setAbbreviationCode:(NSString *)arg1 ;
-(void)setParentRegion:(PKWorldRegion *)arg1 ;
-(NSString *)localizedName;
-(void)encodeWithCoder:(id)arg1 ;
@end
