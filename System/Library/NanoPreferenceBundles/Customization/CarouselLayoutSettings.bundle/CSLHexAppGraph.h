/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CSLHexAppGraphDelegate;
@class NSMutableDictionary, NSMutableSet, NSString;

@interface CSLHexAppGraph : NSObject <NSFastEnumeration, NSCopying, NSSecureCoding> {

	BOOL _neighborCountValid;
	BOOL _normalizedRadiusDirty;
	float _normalizedHorizontalRadius;
	float _normalizedVerticalRadius;
	unordered_map<CSL::Hex, CSLHexAppNode *__unsafe_unretained, std::__1::hash<CSL::Hex>, std::__1::equal_to<CSL::Hex>, std::__1::allocator<std::__1::pair<const CSL::Hex, CSLHexAppNode *__unsafe_unretained> > >* _nodes;
	unordered_map<CSL::Hex, int, std::__1::hash<CSL::Hex>, std::__1::equal_to<CSL::Hex>, std::__1::allocator<std::__1::pair<const CSL::Hex, int> > >* _neighborCounts;
	id<CSLHexAppGraphDelegate> _delegate;
	NSMutableDictionary* _nodesByBundle;
	NSMutableSet* _changedNodes;

}

@property (nonatomic,retain) NSMutableDictionary * nodesByBundle;                     //@synthesize nodesByBundle=_nodesByBundle - In the implementation block
@property (nonatomic,retain) NSMutableSet * changedNodes;                             //@synthesize changedNodes=_changedNodes - In the implementation block
@property (assign,nonatomic,__weak) id<CSLHexAppGraphDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float normalizedHorizontalRadius; 
@property (nonatomic,readonly) float normalizedVerticalRadius; 
@property (nonatomic,readonly) NSString * abbreviatedDescription; 
+(id)unarchiveFromPropertyList:(id)arg1 ;
+(char)supportsSecureCoding;
-(id)nodeAtHex:(Hex)arg1 ;
-(BOOL)integrityCheck;
-(int)neighborCountOfHex:(Hex)arg1 upToMinimumNeighbors:(int)arg2 withinRange:(unsigned)arg3 ;
-(void)removeNodeUsingIterator:(_hash_map_const_iterator<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<CSL::Hex, CSLHexAppNode *__unsafe_unretained>, void *> *> >*)arg1 ;
-(void)removeNodeWithoutReflowUsingIterator:(_hash_map_const_iterator<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<CSL::Hex, CSLHexAppNode *__unsafe_unretained>, void *> *> >*)arg1 ;
-(void)collapseToHex:(Hex)arg1 ignoringNode:(id)arg2 ;
-(BOOL)checkHexes:(unordered_set<CSL::Hex, std::__1::hash<CSL::Hex>, std::__1::equal_to<CSL::Hex>, std::__1::allocator<CSL::Hex> >*)arg1 connectedNodes:(id)arg2 disconnectedNodes:(id)arg3 ;
-(void)collapseLonelyNodes:(id)arg1 connectedNodes:(id)arg2 disconnectedNodes:(id)arg3 ;
-(BOOL)checkNode:(id)arg1 connectedNodes:(id)arg2 disconnectedNodes:(id)arg3 ;
-(void)removeNodeWithoutReflow:(id)arg1 ;
-(int)directNeighborCountOfHex:(Hex)arg1 ;
-(id)addNodeWithBundleIdentifier:(id)arg1 ;
-(NSString *)abbreviatedDescription;
-(void)removeNodeObjectForKey:(Hex)arg1 ;
-(void)updateNormalizedRadius;
-(BOOL)integrityCheckIgnoringNode:(id)arg1 shouldCheckNeighbors:(BOOL)arg2 ;
-(BOOL)hex:(Hex)arg1 hasAtLeastNNearbyNodes:(int)arg2 withinRange:(unsigned)arg3 ;
-(void)commitMove;
-(NSMutableDictionary *)nodesByBundle;
-(id)initFromPropertyList:(id)arg1 ;
-(void)resetToDefaults:(id)arg1 ;
-(void)revertMove;
-(id)changeToMatch:(id)arg1 ;
-(void)setNode:(id)arg1 toHex:(Hex)arg2 ;
-(BOOL)isLonelyHex:(Hex)arg1 ;
-(id)nodeWithBundleIdentifier:(id)arg1 ;
-(void)moveNode:(id)arg1 toHex:(Hex)arg2 final:(BOOL)arg3 ;
-(void)setNodeObject:(id)arg1 forKey:(Hex)arg2 ;
-(void)calculateNeighborCounts;
-(Hex)firstGoodEmptyHex;
-(void)incrementNeighborCountsForHex:(Hex)arg1 ;
-(void)collapseLonelyNodes:(id)arg1 ;
-(void)moveNode:(id)arg1 toHex:(Hex)arg2 ;
-(void)setNodesByBundle:(NSMutableDictionary *)arg1 ;
-(void)setChangedNodes:(NSMutableSet *)arg1 ;
-(id)disconnectedNodesCheckingHexes:(unordered_set<CSL::Hex, std::__1::hash<CSL::Hex>, std::__1::equal_to<CSL::Hex>, std::__1::allocator<CSL::Hex> >*)arg1 ;
-(BOOL)containsNodeAtHex:(Hex)arg1 ;
-(NSMutableSet *)changedNodes;
-(id)removeNodeAtHex:(Hex)arg1 ;
-(float)normalizedVerticalRadius;
-(id)archiveToPropertyList;
-(void)decrementNeighborCountsForHex:(Hex)arg1 ;
-(float)normalizedHorizontalRadius;
-(id)allNodes;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_CS5*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CSLHexAppGraphDelegate>)arg1 ;
-(unsigned)count;
-(id)description;
-(id<CSLHexAppGraphDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeNode:(id)arg1 ;
-(BOOL)addNode:(id)arg1 ;
-(id)initWithNodes:(id)arg1 ;
@end

