/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <PersonalizationPortrait/PPContactNameRecord.h>

@class PPPBContactNameRecord;

@interface PPInternalContactNameRecord : PPContactNameRecord {

	PPPBContactNameRecord* _pbRecord;

}
-(id)cityNames;
-(id)relatedNames;
-(id)streetNames;
-(id)middleName;
-(id)pbRecord;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)phoneticMiddleName;
-(id)sourceIdentifier;
-(id)jobTitle;
-(id)clientCopy;
-(id)phoneticFirstName;
-(unsigned char)changeType;
-(id)organizationName;
-(id)identifier;
-(id)phoneticLastName;
-(unsigned char)source;
-(id)nickname;
-(id)initWithIdentifier:(id)arg1 score:(double)arg2 source:(unsigned char)arg3 sourceIdentifier:(id)arg4 changeType:(unsigned char)arg5 firstName:(id)arg6 phoneticFirstName:(id)arg7 middleName:(id)arg8 phoneticMiddleName:(id)arg9 lastName:(id)arg10 phoneticLastName:(id)arg11 organizationName:(id)arg12 jobTitle:(id)arg13 nickname:(id)arg14 relatedNames:(id)arg15 streetNames:(id)arg16 cityNames:(id)arg17 ;
-(id)initWithPBContactNameRecord:(id)arg1 ;
-(double)score;
-(void)setScore:(double)arg1 ;
-(id)lastName;
-(id)firstName;
@end

