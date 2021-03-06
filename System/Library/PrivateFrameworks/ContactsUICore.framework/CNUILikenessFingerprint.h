/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _CNUILikenessFingerprintImpl;
@interface CNUILikenessFingerprint : NSObject <NSCopying> {

	id<_CNUILikenessFingerprintImpl> _impl;

}
+(id)fingerprintForContacts:(id)arg1 scope:(id)arg2 ;
+(id)fingerprintForContact:(id)arg1 ;
+(id)publicFingerprintForContact:(id)arg1 ;
+(id)publicFingerprintForContacts:(id)arg1 scope:(id)arg2 ;
+(id)fingerprintForContactIdentifier:(id)arg1 ;
+(id)fingerprintForScope:(id)arg1 ;
+(id)fingerprintForData:(id)arg1 ;
+(id)implForContact:(id)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithImpl:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasContactIdentifier:(id)arg1 ;
-(id)initWithContacts:(id)arg1 scope:(id)arg2 ;
@end

