/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LAContextExternalizationProt;
#import <MechanismBase/MechanismBase-Structs.h>
@interface ACMContextRecord : NSObject {

	unsigned _passphrasePurpose;
	ACMHandleRef _context;
	id<LAContextExternalizationProt> _cachedExternalizationDelegate;
	unsigned long long _flags;

}

@property (nonatomic,readonly) ACMHandleRef context;                                                               //@synthesize context=_context - In the implementation block
@property (nonatomic,__weak,readonly) id<LAContextExternalizationProt> cachedExternalizationDelegate;              //@synthesize cachedExternalizationDelegate=_cachedExternalizationDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                                                             //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned passphrasePurpose;                                                           //@synthesize passphrasePurpose=_passphrasePurpose - In the implementation block
-(unsigned)passphrasePurpose;
-(void)setPassphrasePurpose:(unsigned)arg1 ;
-(id<LAContextExternalizationProt>)cachedExternalizationDelegate;
-(void)setFlags:(unsigned long long)arg1 ;
-(id)initWithACMContext:(ACMHandleRef)arg1 cachedExternalizationDelegate:(id)arg2 ;
-(unsigned long long)flags;
-(ACMHandleRef)context;
@end

