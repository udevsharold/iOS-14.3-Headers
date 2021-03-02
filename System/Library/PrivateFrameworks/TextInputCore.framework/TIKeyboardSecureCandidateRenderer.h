/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class NSMutableDictionary, CAContext, NSString;

@interface TIKeyboardSecureCandidateRenderer : NSObject {

	NSMutableDictionary* _secureCandidateCache;
	CAContext* _context;
	NSString* _localeIdentifier;
	NSMutableDictionary* _accessibilityLabelCache;

}

@property (nonatomic,retain) NSMutableDictionary * secureCandidateCache;              //@synthesize secureCandidateCache=_secureCandidateCache - In the implementation block
@property (nonatomic,readonly) CAContext * context;                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * localeIdentifier;                             //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
+(id)allRenderers;
-(NSString *)localeIdentifier;
-(id)localizedStringForKey:(id)arg1 ;
-(id)init;
-(CFArrayRef)imagesFromSecureCandidates:(id)arg1 withRenderTraits:(id)arg2 outAccessibilityLabels:(id*)arg3 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(void)clearSecureCandidateCache;
-(id)accessibilityLabelsForSecureHeaders:(id)arg1 secureContents:(id)arg2 truncationSentinel:(id)arg3 ;
-(void)dealloc;
-(id)cachedCandidateForSecureCandidate:(id)arg1 ;
-(id)initForLocalizedStrings;
-(id)updateCachedCandidate:(id)arg1 withCandidateString:(id)arg2 ;
-(id)_truncationSentinel;
-(CGImageRef)imageForSendCurrentLocationWithRenderTraits:(id)arg1 ;
-(void)cacheAccessibilityLabel:(id)arg1 forSlotID:(unsigned)arg2 ;
-(id)slotIDsFromSecureCandidates:(id)arg1 withRenderTraits:(id)arg2 ;
-(void)setSecureCandidateCache:(NSMutableDictionary *)arg1 ;
-(CFArrayRef)imagesFromContexts:(CFArrayRef)arg1 ;
-(NSMutableDictionary *)secureCandidateCache;
-(id)accessibilityLabelForSlotID:(unsigned)arg1 ;
-(unsigned)slotIDForSendCurrentLocationWithRenderTraits:(id)arg1 ;
-(CFArrayRef)arrayOfContexts:(unsigned long long)arg1 withRenderTraits:(id)arg2 ;
-(id)cachedPayloadForSecureCandidateSlotID:(unsigned)arg1 ;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(CAContext *)context;
-(id)localizedApplicationNameWithBundleIdentifier:(id)arg1 ;
@end
